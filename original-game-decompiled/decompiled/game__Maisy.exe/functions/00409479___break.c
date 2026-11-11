
/* ==== __break @ 00409479 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409479-00409479
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


