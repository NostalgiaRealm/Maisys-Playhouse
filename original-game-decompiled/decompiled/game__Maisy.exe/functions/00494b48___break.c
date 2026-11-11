
/* ==== __break @ 00494b48 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494b48-00494b48
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


