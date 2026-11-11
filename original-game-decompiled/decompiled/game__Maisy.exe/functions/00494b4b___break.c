
/* ==== __break @ 00494b4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494b4b-00494b4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


