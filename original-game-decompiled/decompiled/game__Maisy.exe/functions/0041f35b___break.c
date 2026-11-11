
/* ==== __break @ 0041f35b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f35b-0041f35b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


