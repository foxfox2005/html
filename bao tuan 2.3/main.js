alert('tính lãi suất ngân hàng')
let tietKiem = parseFloat(prompt('nhập số tiền gửi nâng hàng'))
let nam = parseFloat(prompt('nhập số năm đã tiết kiệm'))
let  lai = (((tietKiem / 100) * 6.9) * nam) + tietKiem
document.write ('Số tiền đã lãi được trong '+ nam + ' năm  qua là ' + lai)