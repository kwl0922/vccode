weight, height = map(float, input().split())
bmi = weight / (height ** 2)
if bmi < 18.5:
    print("Underweight")
elif 18.5 <= bmi < 24:
    print("Normal")
elif 24 <= bmi:
    print("{:.6g}\nOverweight".format(bmi))