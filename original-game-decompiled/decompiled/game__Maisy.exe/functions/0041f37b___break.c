
/* ==== __break @ 0041f37b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f37b-0041f37b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


