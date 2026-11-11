
/* ==== __break @ 00401e4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e4f-00401e4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


