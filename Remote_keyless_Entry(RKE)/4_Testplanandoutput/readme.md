## HIGH LEVEL TEST PLAN 

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 1 | car lock | Press button | car locked | car locked |
| 2 | car unlock | press button | car unlocked | car unlocked|
| 3 | Alarm activation  | press button | Alarm activated | alarm activated |
| 4 | alarm deactivation | press button | alarm deactivated | alarm deactivated |

---

## LOW LEVEL TEST PLAN 

| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 1 | Check for ALLLED_ON() | PRESS BUTTON | ALL LED ON | ALL LED ON | ✅ | 
| 2 | Check for ALLLED_OFF() | PRESS BUTTON | ALL LED OFF | ALL LED OFF |  ✅  |  
|  3 | Check for LEDCW_ON() | PRESS BUTTON | Clockwise rotation led on | clockwise rotation led on | ✅ | 
| 4 |  Check for LEDACW_ON() | PRESS BUTTON | Anticlockwise rotation on | anticlockwise rotation on |  ✅ | 
