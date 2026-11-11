
/* ==== __break @ 00473766 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00473766-00473766
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


