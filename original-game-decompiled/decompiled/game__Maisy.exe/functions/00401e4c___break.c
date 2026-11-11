
/* ==== __break @ 00401e4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e4c-00401e4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


