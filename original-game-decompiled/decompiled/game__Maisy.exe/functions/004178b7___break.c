
/* ==== __break @ 004178b7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178b7-004178b7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


