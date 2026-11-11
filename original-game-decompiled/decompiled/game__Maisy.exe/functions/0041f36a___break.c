
/* ==== __break @ 0041f36a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f36a-0041f36a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


