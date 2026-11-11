
/* ==== __break @ 0045022b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045022b-0045022b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


