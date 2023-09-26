with open('UIT_23520161.sln', 'r', encoding='utf-8') as file:
    content = file.read()

    for i in range(84, 177):
        i_width_3 = f'{i:03}'
        folder_name = f'Bài {i_width_3}'
        new_folder_name = f'Bai{i_width_3}'
        content = content.replace(folder_name, new_folder_name)

with open('UIT_23520161.sln', 'w', encoding='utf-8') as file:
    file.write(content)