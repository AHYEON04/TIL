word = input('단어를 입력하세요:')

def is_palindrome(word):
     if len(word) < 2:
        return True
     if word[0] != word[-1]:
        return False
     return is_palindrome(word[1:-1])

print(is_palindrome(word))
