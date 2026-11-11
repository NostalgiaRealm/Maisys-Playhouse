
/* ==== __break @ 004298fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004298fd-004298fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


