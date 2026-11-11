
/* ==== __break @ 00449973 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00449973-00449973
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


