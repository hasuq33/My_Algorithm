const maxLength = function(arr) {
    let maxCount = 0;

    const isValid = (str) =>{
        const charSet = new Set(str);
        return str.length === charSet.size;
    }

    const findMax  = (index, currentStr) =>{
        if(isValid(currentStr)){
            maxCount = Math.max(maxCount,currentStr.length);
        }

        for(let i=index; i< arr.length; i++){
            findMax(i+1, currentStr + arr[i]);
        }
    }

    findMax(0, '');

    return maxCount;
};

let arr = ["cha", "r", "act", "ers"];
console.log(maxLength(arr));
