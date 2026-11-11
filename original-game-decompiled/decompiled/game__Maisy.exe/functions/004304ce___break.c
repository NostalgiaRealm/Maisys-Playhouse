
/* ==== __break @ 004304ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304ce-004304ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


