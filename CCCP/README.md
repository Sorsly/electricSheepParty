Note: The Id slice in CCCP maps integers 0->numbots to camera defined ID numbers.
      The frontend only knows the bots id in the form of the index in this ids slice
      The camera only knows the distinct id it gives the blobs it sees
      The CCCPs jobs is to keep those two numbers in check, and assign the right values to the correct index
