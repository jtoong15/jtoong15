def emoji_conversion(message):
    
    message = phone.split("  ")
    conversion = {
        "Happy" : "😁",
        "Sad": "😢",
        "Angry": "😡",
        "sleepy": "😴",
        "In Love": "🥰"
    }
    output = ""
    for number in message:
        output += conversion.get(number, number) + " "
    return output    
    
        
phone = input("Enter what do you feel right now?: ")
print(emoji_conversion(phone))