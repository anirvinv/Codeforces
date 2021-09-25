alphabet_list = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

alphabet_encoding = {}

for i in range(len(alphabet_list)):
    alphabet_encoding[alphabet_list[i]
                      ] = alphabet_list[len(alphabet_list) - i - 1]

print(alphabet_encoding)


def solution(s):
    result = ""
    for c in s:
        if c in alphabet_encoding.keys():
            result += alphabet_encoding[c]
        else:
            result += c
    return result


print(solution("Yvzs! I xzm'g yvorvev Lzmxv olhg srh qly zg gsv xlolmb!!"))
print(solution("wrw blf hvv ozhg mrtsg'h vkrhlwv?"))
