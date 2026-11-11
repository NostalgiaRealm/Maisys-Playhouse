
/* ==== __break @ 14010a61 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a61-14010a61
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


