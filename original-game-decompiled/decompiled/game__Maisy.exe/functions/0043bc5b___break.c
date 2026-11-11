
/* ==== __break @ 0043bc5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bc5b-0043bc5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


