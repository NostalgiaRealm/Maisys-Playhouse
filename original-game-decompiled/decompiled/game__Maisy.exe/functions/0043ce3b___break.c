
/* ==== __break @ 0043ce3b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ce3b-0043ce3b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


