
/* ==== __break @ 14019108 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019108-14019108
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


