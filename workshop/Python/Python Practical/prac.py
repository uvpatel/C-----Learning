print("------- Student Enrollment Form ------")
name = input("Enter your name: ")
age = int(input("Enter your age: "))
course = input("Enter your course: ")
expected = int(input("Enter your expected graduation year: "))
left = int(input("Enter years left untill graduation: "))

print(f'''\nName : {name}\n
            Age : {age}\n
            Course : {course}\n
            Expected Graduation Year: {expected}\n
            Years Left Until Graduation: {left}\n
      ''')