import os

for i in range(1,168):
    folder_name = f'Bai{i:03}'
    os.chdir(folder_name)

    with open(f'{folder_name}.vcxproj', 'r', encoding='utf-8') as f:
        vcxproj_content = f.read().replace('Bài', 'Bai')
    with open(f'{folder_name}.vcxproj', 'w', encoding='utf-8') as f:
        f.write(vcxproj_content)

    os.chdir('../')