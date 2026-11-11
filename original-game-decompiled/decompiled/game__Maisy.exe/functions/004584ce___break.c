
/* ==== __break @ 004584ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584ce-004584ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


