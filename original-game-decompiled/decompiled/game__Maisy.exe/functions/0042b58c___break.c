
/* ==== __break @ 0042b58c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042b58c-0042b58c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


