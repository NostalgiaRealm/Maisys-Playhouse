
/* ==== __break @ 1401af8b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8b-1401af8b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


