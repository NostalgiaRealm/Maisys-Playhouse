
/* ==== __break @ 004a0eb8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0eb8-004a0eb8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


