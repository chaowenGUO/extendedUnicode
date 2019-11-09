console.assert(Object.is(String.fromCodePoint(0x10035), '\u{10035}'))
console.assert(Object.is('\u{10035}'.codePointAt(0).toString(16), '10035'))
