
/* ==== __break @ 0041f36c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f36c-0041f36c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


