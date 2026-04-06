class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if (s.length !== t.length) return false;

        const alphabet = new Array(26).fill(0);

        for ( let idx = 0; idx < s.length; idx++ ){
            alphabet[s.charCodeAt(idx) - 'a'.charCodeAt(0)]++;
            alphabet[t.charCodeAt(idx) - 'a'.charCodeAt(0)]--;
        }

        for ( const val of alphabet){
            if (val !== 0) return false;
        }
        return true;
    }
}
