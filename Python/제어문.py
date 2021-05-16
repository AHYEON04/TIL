print("대마고에 오신 것을 환영합니다.")
print("이름과 나이를 입력하세요: ")
name, age = input().split()
print('{}세 {}씨, 반갑습니다.'.format(age, name))
print("국어, 영어, 수학 성적을 입력하세요: ")
ko, en, ma = map(int, input().split())
a = (ko + en + ma)/3
print('{}씨의 평균은 {}입니다.'.format(name, a))
if a > 80:
    print("합격입니다.")
    if a > 90:
        print("우등상 수상 대상입니다. 축하합니다.")
else:
    print("불합격입니다.")
