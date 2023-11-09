# Function to check if a number is a palindrome
def is_palindrome(num):
    return str(num) == str(num)[::-1]

# Find the largest palindrome made from the product of two 3-digit numbers
def largest_palindrome_product():
    largest_palindrome = 0

    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome

# Save the result in the file "102-result"
result = largest_palindrome_product()

with open("102-result", "w") as file:
    file.write(str(result))
