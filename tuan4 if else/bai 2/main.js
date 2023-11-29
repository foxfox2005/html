function changeMoney() {
    let money = +document.getElementById("money").value
    let from = +document.getElementById("from").value
    let to = +document.getElementById("to").value
    let result = money * to / from
    document.getElementById("result").innerHTML = "result : " + result.toFixed(4)
}