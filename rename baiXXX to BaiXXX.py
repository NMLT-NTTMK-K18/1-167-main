import os

current_directory = os.getcwd()
matching_folders = []
for item in os.listdir(current_directory):
    if os.path.isdir(item) and item.startswith("bai"):
        matching_folders.append(item)

for folder in matching_folders:
    new_folder = 'B' + folder[1:]
    os.chdir(f'./{folder}')
    os.rename(f'{folder}.vcxproj', f'{new_folder}.vcxproj')
    os.rename(f'{folder}.vcxproj.filters', f'{new_folder}.vcxproj.filters')
    os.rename(f'{folder}.vcxproj.user', f'{new_folder}.vcxproj.user')
    with open(f'{new_folder}.vcxproj', 'r', encoding='utf-8') as f:
        vcxproj_content = f.read().replace('bai', 'Bai')
    with open(f'{new_folder}.vcxproj', 'w', encoding='utf-8') as f:
        f.write(vcxproj_content)
    os.chdir('../')
    os.rename(f'{folder}', f'{new_folder}')