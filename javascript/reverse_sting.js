const reverseString = (str) => {
    return str
        .split('')
        .reverse()
        .join('');
}

reverseString('Hacktoberfest');