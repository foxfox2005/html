let  canNang= +prompt("nhap can nang")
let  chieuCao= +prompt("nhap chieu cao")
let bmi = canNang / (chieuCao * chieuCao)
if (bmi <= 16){
    alert ("gay cap do III")
} else if (bmi <= 17) {
    alert ("gay cap do II")
} else if (bmi <+ 18.5) {
    alert("gay cap do I")
} else if (bmi <= 25) {
    alert("binh thuon")
} else if (bmi <= 30) {
    alert("thua can")
} else if (bmi <= 35) {
    alert("beo phi 1")
} else if (bmi <= 40 ) {
    alert ("beo phi cap do II")
} else if (bmi > 40) {
    alert("beo phi cap do 3")
}
