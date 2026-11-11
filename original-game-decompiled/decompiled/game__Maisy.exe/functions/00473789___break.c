
/* ==== __break @ 00473789 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00473789-00473789
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


