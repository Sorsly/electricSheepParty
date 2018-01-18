import subprocess
import re

if __name__ == "__main__":
    ipfile = "ips.txt"
    cpuip = subprocess.check_output(["hostname","-I"]).decode()
    rawdata = subprocess.check_output(["sudo","nmap","-PU","-p0",cpuip+"/24"]).decode()

    query = r"Nmap scan report for (?P<ip>\d+\.\d+.\d+\.\d+).*?MAC Address: .*?\((?P<dev>.+?)\)"
    found = re.findall(query,rawdata,re.DOTALL)
    camIps = [ip[0] for ip in found if "Raspberry" in ip[1]]
    botIps = [ip[0] for ip in found if "Espressif" in ip[1]]

    query = r"\d+\.\d+.\d+\.\d+"
    allIps = set(re.findall(query,rawdata))
    comIps = [ip for ip in allIps if ip not in camIps and ip not in botIps]
    print("All IPs:",list(allIps))
    
    with open(ipfile,"w") as fh:
        fh.write("CPU {}".format(cpuip))
        for ip in camIps:
            fh.write("CAM {}\n".format(ip))

        for ip in botIps:
            fh.write("BOT {}\n".format(ip))

        for ip in comIps:
            fh.write("FES {}\n".format(ip))
