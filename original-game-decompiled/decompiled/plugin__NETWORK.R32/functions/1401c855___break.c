
/* ==== __break @ 1401c855 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c855-1401c855
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


