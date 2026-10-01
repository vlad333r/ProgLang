def check_string(text: str):
    if text:
        print(f"Строка '{text}' неявно преобразована в True")
    else:
        print("Пустая строка неявно преобразована в False")

check_string("Hello, Python!")
check_string("")

user_input = ""
username = user_input or "DefaultUser"
print("Имя пользователя:", username)