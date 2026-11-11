
/* ==== __break @ 004151ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004151ec-004151ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


