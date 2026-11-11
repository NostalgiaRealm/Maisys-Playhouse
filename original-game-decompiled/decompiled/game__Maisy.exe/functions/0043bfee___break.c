
/* ==== __break @ 0043bfee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bfee-0043bfee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


