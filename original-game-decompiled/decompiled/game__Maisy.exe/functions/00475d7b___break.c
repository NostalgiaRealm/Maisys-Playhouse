
/* ==== __break @ 00475d7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00475d7b-00475d7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


