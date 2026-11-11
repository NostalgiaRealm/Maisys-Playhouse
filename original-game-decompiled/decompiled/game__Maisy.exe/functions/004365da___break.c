
/* ==== __break @ 004365da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004365da-004365da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


