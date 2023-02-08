function palindrome(str) {
  const reversed = str.split('').reverse().join('');

  if(str == reversed) {
      console.log('true');
  }
  else {
      console.log('false');
  }
}
palindrome('hi')

  // 출력
  // palindrome('level') => true
  // palindrome('hi') => false