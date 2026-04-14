def main():
    """
    Among the first 196 thousand square numbers, what is the sum of all the odd squares?
    """
    s = 0    
    for i in range(1, 196000, 2):        
        s = s + i * i
    print(f"sum = {s}")  


if __name__ == "__main__":
    main()
