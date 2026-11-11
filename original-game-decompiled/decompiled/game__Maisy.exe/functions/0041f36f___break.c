
/* ==== __break @ 0041f36f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f36f-0041f36f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


