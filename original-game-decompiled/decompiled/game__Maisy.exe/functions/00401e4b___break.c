
/* ==== __break @ 00401e4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e4b-00401e4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


